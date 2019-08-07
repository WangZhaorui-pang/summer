import socket

count = 0

#新建一个 udp socket
udpSocket = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)


#绑定端口
udpSocket.bind( ("0.0.0.0",7001))
print(f"bind  7001...")

while True:
    # 接收到 recvfrom
    data,client_address = udpSocket.recvfrom(1024)

    count = count +1
    bcount = len(data)
    print(f"我累计接收了{count}次数据，总字节数数为{bcount}，此次数据为{data}")

    # 发送 sendto
    sendata=(f"我已累计接收了{count}次,总字节数数为{bcount}，此次数据为:{data}")
    udpSocket.sendto(sendata.encode(),client_address)


""" #关闭连接
udpSocket.close() """