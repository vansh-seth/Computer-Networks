# Static Routing using Cisco Packet Tracer
## Objective
The objective of this project is to implement and understand static routing using Cisco Packet Tracer. The task involves creating three networks and connecting them using routers. The process of static routing will be simulated to enable packet delivery between different networks.
## Task to be Performed
- Study Static Routing.
- Create three networks and interconnect them using routers.
- Configure static routes to ensure proper packet delivery.
- Simulate and verify network communication.
## Prerequisites
- Cisco Packet Tracer installed.
- Basic understanding of networking concepts (IP addressing, subnetting, routing).
- Familiarity with Cisco router CLI commands.
## Network Topology
The network consists of three distinct networks connected via routers:
1. **Network 1**: [IP Addressing Details]
2. **Network 2**: [IP Addressing Details]
3. **Network 3**: [IP Addressing Details]

## Steps to Implement Static Routing
### 1. Network Setup
- Add three routers in Cisco Packet Tracer.
- Configure IP addresses for each network and assign them to router interfaces.
- Connect routers and PCs using appropriate cables.

### 2. Configure Static Routes
On each router, manually configure static routes using the following command:
```bash
Router(config)# ip route <destination-network> <subnet-mask> <next-hop-IP>
```
Example:
```bash
Router1(config)# ip route 192.168.2.0 255.255.255.0 192.168.1.2
Router2(config)# ip route 192.168.3.0 255.255.255.0 192.168.2.2
```

### 3. Verify Connectivity
- Use the `ping` command to test connectivity between devices in different networks.
- Use `show ip route` to verify the routing table.

## Expected Outcome
- Successful delivery of packets between networks.
- Properly configured static routing tables on each router.

## Troubleshooting Tips
- Ensure correct IP addressing and subnet masks.
- Verify cable connections and interface configurations.
- Check routing table entries using `show ip route`.
- Use `ping` and `traceroute` commands for debugging.

## Conclusion
Static routing provides a foundational understanding of how routers manually forward packets between networks. While it is useful for small networks, dynamic routing protocols are recommended for larger and more complex networks.

## References
- [Cisco Networking Academy](https://www.netacad.com/)
- [Cisco Packet Tracer Official Guide](https://www.cisco.com/)
