import socket

count = 0

#新建一个  tcp  socket
tcp_sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)


#绑定端口
address = ("0.0.0.0",7000)
tcp_sock.bind(address)
print(f"bind{address}...")
#监听
tcp_sock.listen(10)

while True:
    #等待链接
    conn,addr = tcp_sock.accept()
    print(f"{addr}connected")
    #接收来自客户端发过来的数据
    data = conn.recv(1024)
    
    count = count +1
    bcount = len(data)
    if data == b"":
        conn.close()


    print(f"我累计接收了{count}次数据，总字节数数为{bcount}，此次数据为{data}")
    #发送给客户端数据
    sendata=(f"我已累计接收了{count}次,总字节数数为{bcount}，此次数据为:{data}")
    conn.send(sendata.encode()) 
    conn.close()
