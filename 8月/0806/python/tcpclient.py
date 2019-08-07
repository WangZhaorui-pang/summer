import socket


tcp_sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)


#建立连接
address = ("127.0.0.1",7000)
tcp_sock.connect(address)


#发送字节形式数据
tcp_sock.send(b"hello")

# 接收一下数据
data = tcp_sock.recv(1024)
print(data.decode())

#关闭连接
tcp_sock.close()