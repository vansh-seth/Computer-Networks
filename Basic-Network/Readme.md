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

### Examples:
- **ping -t**: Sends ping requests continuously until interrupted.
  ```bash
  ping -t 8.8.8.8
  ```
  Output:
  ```
  Pinging 8.8.8.8 with 32 bytes of data:
  Reply from 8.8.8.8: bytes=32 time=28ms TTL=56
  Reply from 8.8.8.8: bytes=32 time=29ms TTL=56
  (continues...)
  ```

- **ping -n <count>**: Sends a specific number of ping requests.
  ```bash
  ping -n 5 8.8.8.8
  ```
  Output:
  ```
  Pinging 8.8.8.8 with 32 bytes of data:
  Reply from 8.8.8.8: bytes=32 time=28ms TTL=56
  Reply from 8.8.8.8: bytes=32 time=29ms TTL=56
  (continues...)
  ```

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
  ```
  Displays all current TCP/IP network configuration values and refreshes DHCP and DNS settings.
  ```

---

## 3. Tracert Command

The `tracert` (Traceroute) command is used to trace the path that packets take to reach a destination host.

### Basic Syntax:
```bash
tracert <hostname_or_ip>
```

### Example:
- **tracert -h <max_hops>**: Specifies the maximum number of hops to trace.
  ```bash
  tracert -h 10 8.8.8.8
  ```
  Output:
  ```
  Tracing route to 8.8.8.8 over a maximum of 10 hops:
  1    <1 ms    <1 ms    <1 ms  192.168.1.1
  2    15 ms    14 ms    14 ms  10.0.0.1
  3    28 ms    29 ms    28 ms  8.8.8.8
  ```

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
```
Server:  UnKnown
Address:  192.168.1.1

Non-authoritative answer:
Name:    example.com
Addresses:  93.184.216.34
```

---

## 5. Netstat Command

The `netstat` command provides information about network connections, routing tables, and network interface statistics.

### Basic Syntax:
```bash
netstat
```

### Example:
- **netstat -r**: Displays the routing table.
  ```bash
  netstat -r
  ```
  Output:
  ```
  IPv4 Route Table
  ===========================================================================
  Active Routes:
  Network Destination        Netmask          Gateway       Interface  Metric
  0.0.0.0                   0.0.0.0          192.168.1.1   192.168.1.2    25
  192.168.1.0               255.255.255.0    On-link        192.168.1.2    25
  ```

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
```
DESKTOP-XYZ
```

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
```
===========================================================================
Interface List
  14...00 15 5d 94 67 f1 ......Microsoft Wi-Fi Direct Virtual Adapter #2
  15...00 15 5d 94 67 f2 ......Intel(R) Dual Band Wireless-AC 3165
===========================================================================
IPv4 Route Table
===========================================================================
Active Routes:
Network Destination        Netmask          Gateway       Interface  Metric
0.0.0.0                   0.0.0.0          192.168.1.1   192.168.1.2    25
192.168.1.0               255.255.255.0    On-link        192.168.1.2    25
```

---

## Conclusion

This guide covers the basic network troubleshooting commands used to diagnose and resolve issues in network connectivity and routing. Mastery of these tools will allow you to effectively monitor and troubleshoot networks.
