# Network Troubleshooting
## Objective
This document provides a detailed study of basic network troubleshooting and configuration commands, including the usage and output of the following commands:

- `ping`
- `ipconfig`
- `tracert`
- `nslookup`
- `netstat`
- `hostname`
- `routeprint`

## Table of Contents
1. [Ping Command](#ping-command)
2. [Ipconfig Command](#ipconfig-command)
3. [Tracert Command](#tracert-command)
4. [Nslookup Command](#nslookup-command)
5. [Netstat Command](#netstat-command)
6. [Hostname Command](#hostname-command)
7. [Routeprint Command](#routeprint-command)

---

## 1. Ping Command

The `ping` command is used to test the network connectivity between the host and another device on a network. It works by sending ICMP Echo Request messages and waiting for Echo Replies.

### Basic Syntax:
```bash
ping <hostname_or_ip>
```
### Output:

![image](https://github.com/user-attachments/assets/c20b319a-a4e9-4a4b-adec-97312c3d9c2c)

### Examples:
- **ping -t**: Sends ping requests continuously until interrupted.
  ```bash
  ping -t 8.8.8.8
  ```
  Output:
  
  ![image](https://github.com/user-attachments/assets/f5a548c8-b3a6-4ece-bf10-56f98f612ead)

- **ping -n <count>**: Sends a specific number of ping requests.
  ```bash
  ping -n 5 8.8.8.8
  ```
  Output:
  
  
### Special IP Addresses:
- **0.0.0.0**: Represents an invalid or unspecified address. It typically means that no specific IP address has been assigned to a device.
  
- **127.0.0.1**: The loopback address. Used to test the internal network stack of a device (also called localhost).

- **225.225.225.225**: A multicast address. It is used to send data to multiple devices in a specific multicast group.

- **172.16.73.10**: A private IP address within the subnet range `172.16.0.0` to `172.31.255.255`.

---

## 2. Ipconfig Command

The `ipconfig` command displays all current TCP/IP network configurations.

### Basic Syntax:
```bash
ipconfig
```
### Output:

![image](https://github.com/user-attachments/assets/1fad64b3-c8de-43f1-8d84-b20317397eb6)

### Examples:
- **ipconfig /all**: Shows detailed information about all network interfaces (IP addresses, DNS, MAC address, etc.)
  ```bash
  ipconfig /all
  ```
  Output:
  ```
  Windows IP Configuration
  Host Name . . . . . . . . . . . . : DESKTOP-XYZ
  Primary Dns Suffix  . . . . . . . : example.com
  Ethernet adapter Ethernet:
      Connection-specific DNS Suffix  . : 
      IPv4 Address. . . . . . . . . . : 192.168.1.2
      Subnet Mask . . . . . . . . . . : 255.255.255.0
      Default Gateway . . . . . . . . : 192.168.1.1
  ```

- **ipconfig /?**: Displays the help information for `ipconfig`.
  ```bash
  ipconfig /?
  ```
  Output:

  ![image](https://github.com/user-attachments/assets/1e0c0d05-76bd-47bd-9643-0791a2591f1f)


---

## 3. Tracert Command

The `tracert` (Traceroute) command is used to trace the path that packets take to reach a destination host.

### Basic Syntax:
```bash
tracert <hostname_or_ip>
```
### Output:

![image](https://github.com/user-attachments/assets/8993cd0a-5387-41f5-88cb-5a7f263c99fe)

### Example:
- **tracert -h <max_hops>**: Specifies the maximum number of hops to trace.
  ```bash
  tracert -h 10 8.8.8.8
  ```
  Output:
  
 ![image](https://github.com/user-attachments/assets/d4eac463-4ffe-4515-9253-2dd9be1faa69)

---

## 4. Nslookup Command

The `nslookup` command is used to query DNS (Domain Name System) servers for information about domain names or IP addresses.

### Basic Syntax:
```bash
nslookup <domain_name>
```

### Example:
```bash
nslookup example.com
```
Output:

![image](https://github.com/user-attachments/assets/35a9e14e-fd2d-4228-9762-fd1af2fd84ae)

---

## 5. Netstat Command

The `netstat` command provides information about network connections, routing tables, and network interface statistics.

### Basic Syntax:
```bash
netstat
```
### Output: 

![image](https://github.com/user-attachments/assets/9b9e1a06-c3f3-47b9-8149-9777e494702c)

### Example:
- **netstat -r**: Displays the routing table.
  ```bash
  netstat -r
  ```
  Output:
  
  ![image](https://github.com/user-attachments/assets/6c8b0ca8-09f2-4257-b1ce-c976e7f1d3b1)

---

## 6. Hostname Command

The `hostname` command is used to display or set the system's hostname.

### Basic Syntax:
```bash
hostname
```

### Example:
```bash
hostname
```
Output:

![image](https://github.com/user-attachments/assets/8ddf70a0-c027-424d-8be1-6bb1701ed1c4)

---

## 7. Routeprint Command

The `routeprint` command displays the routing table on Windows.

### Basic Syntax:
```bash
route print
```

### Example:
```bash
route print
```
Output:

![image](https://github.com/user-attachments/assets/a8293349-b3af-47f1-9ba8-8c6034796543)

---

## Conclusion

This guide covers the basic network troubleshooting commands used to diagnose and resolve issues in network connectivity and routing. Mastery of these tools will allow you to effectively monitor and troubleshoot networks.
