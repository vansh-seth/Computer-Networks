# Network Troubleshooting and Configuration Using Command-Line Tools

This project involves studying and applying basic network troubleshooting and configuration commands to diagnose network issues and gather network configuration details. The following tools are extensively used in this project:

1. **ping**
2. **ipconfig**
3. **tracert (traceroute)**
4. **nslookup**
5. **netstat**
6. **hostname**
7. **route print**

## Commands Overview

### 1. `ping`

The `ping` command is used to test the reachability of a host on an Internet Protocol (IP) network. It also measures the round-trip time for messages sent from the originating host to a destination computer.

**Usage:**

```bash
ping [hostname or IP address]
```

**Example:**

```bash
ping google.com
ping 192.168.1.1
```

This will send ICMP Echo Request packets to the target and wait for a reply, indicating whether the destination is reachable.

### 2. `ipconfig`

The `ipconfig` command provides details about the current network configuration of the computer, including the IP address, subnet mask, and default gateway.

**Usage:**

```bash
ipconfig
```

To view detailed information, use:

```bash
ipconfig /all
```

**Example:**

```bash
ipconfig
```

This will display the IP configuration for all network adapters on your system.

### 3. `tracert` (Traceroute)

The `tracert` (on Windows) or `traceroute` (on Unix-like systems) command is used to trace the route that packets take from your computer to a destination host, showing each hop along the way.

**Usage:**

```bash
tracert [hostname or IP address]
```

**Example:**

```bash
tracert google.com
```

This will display each network hop along the route from your machine to `google.com`.

### 4. `nslookup`

The `nslookup` command is used to query DNS (Domain Name System) to obtain domain name or IP address mapping information.

**Usage:**

```bash
nslookup [hostname]
```

**Example:**

```bash
nslookup google.com
```

This will query DNS servers to find the IP address of `google.com`.

### 5. `netstat`

The `netstat` command displays active network connections, routing tables, and network interface statistics. It is useful for diagnosing networking issues and monitoring network traffic.

**Usage:**

```bash
netstat
```

To display active connections with detailed information, use:

```bash
netstat -an
```

**Example:**

```bash
netstat
```

This will show a list of all active connections and listening ports on your computer.

### 6. `hostname`

The `hostname` command displays the current hostname of the computer or sets a new hostname for the machine.

**Usage:**

```bash
hostname
```

To change the hostname (requires admin privileges):

```bash
hostname [new hostname]
```

**Example:**

```bash
hostname
```

This will return the current system hostname.

### 7. `route print`

The `route print` command displays the routing table for the current system, showing how packets are routed on the network.

**Usage:**

```bash
route print
```

**Example:**

```bash
route print
```

This will show the system's routing table, including routes, network masks, and gateways.

---

## Practical Use Cases

### Example 1: Diagnosing Network Connectivity Issues

1. Use `ping` to check if the destination host is reachable:
   ```bash
   ping google.com
   ```

2. If the ping fails, use `tracert` to trace the path to the destination:
   ```bash
   tracert google.com
   ```

3. Check your system's IP configuration using `ipconfig`:
   ```bash
   ipconfig
   ```

4. If you suspect DNS issues, use `nslookup` to verify DNS resolution:
   ```bash
   nslookup google.com
   ```

5. Use `netstat` to check for any active connections or listening ports:
   ```bash
   netstat
   ```

6. Review the system's routing table using `route print` to check if there are any incorrect routes:
   ```bash
   route print
   ```

---

## Conclusion

These commands are fundamental for troubleshooting and configuring network settings on both local and remote systems. By using these tools, network administrators and support teams can diagnose connectivity issues, verify configurations, and resolve potential problems effectively.
