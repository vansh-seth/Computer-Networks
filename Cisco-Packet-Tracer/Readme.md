# Cisco Packet Tracer - Networking and Inter-Networking Devices

## Overview
This lab focuses on exploring the basics of computer networking using **Cisco Packet Tracer**, a powerful simulation tool for designing and analyzing network behavior. The objectives include learning about networking devices, creating connections, understanding the logical and physical views of networks, and sending messages between devices.

---

## Basics of Cisco Packet Tracer

### 1. **Network Devices**
These are hardware components that help in data transmission between computers and other devices. Examples:
- **Router**: Connects multiple networks and directs data packets.
- **Switch**: Facilitates communication between devices in a single network.
- **Hub**: A simpler device that broadcasts data to all devices in a network.

### 2. **End Devices**
Devices that are part of the network's endpoints. Examples:
- **PCs**
- **Laptops**
- **Servers**

### 3. **Network Components**
- **Access Points**: Enable wireless connectivity.
- **Modems**: Provide internet access by converting digital data to analog and vice versa.

### 4. **Connections**
- **Copper Cables**: Wired connections between devices.
- **Fiber Optics**: High-speed wired connections.
- **Wireless**: Communication without cables.

### 5. **Logical vs. Physical Views**
- **Logical View**: Focuses on how data flows and is organized in a network. It shows IP addresses, protocols, and data routes.
- **Physical View**: Represents the actual physical arrangement of devices. Includes device types, ports, and connection details.

#### Details of Physical View:
- **Workspace Layout**: Represents the actual room where devices are placed.
- **Rack View**: Displays the hardware configuration in racks.
- **Cable Management**: Visualizes how devices are interconnected physically.

---

## Features in Cisco Packet Tracer
- **Simulation Mode**: Visualize packet flow step-by-step to understand data transfer.
- **Labels**: Add custom text to annotate devices or connections.
- **Send Message**: Test connectivity by sending simple messages between devices.

---

## Steps to Perform the Lab
### Step 1: Set Up the Network
1. Launch Cisco Packet Tracer.
2. Add the following devices:
   - 1 Router
   - 1 Switch
   - 1 Hub
   - 2 PCs
   - 1 Laptop
3. Arrange devices in both logical and physical views.

### Step 2: Connect Devices
1. Use **copper straight-through cables** to connect:
   - PCs and laptops to the switch.
   - Switch to the router.
2. Use a **crossover cable** if connecting two similar devices directly.
3. Add a connection to the hub for comparison.

### Step 3: Configure Devices
1. Assign IP addresses to end devices.
2. Configure routing on the router if required.

### Step 4: Test Connectivity
1. Use the **Ping** tool to test connections between devices.
2. Send messages using the "Message" feature.
3. Switch to **Simulation Mode** to observe packet flow.

![image](https://github.com/user-attachments/assets/7cb51aa5-94c3-4332-9a39-b4b4c8a5f66e)

---

## Output
1. **Switch Communication**:
   - Packets successfully transmitted between devices connected via a switch.
  
     ![image](https://github.com/user-attachments/assets/c0b0aa76-69d7-4854-b949-e0b0cfb5c6a7)
     
2. **Hub Communication**:
   - Data broadcasted to all devices, demonstrating inefficiency compared to a switch.

     ![image](https://github.com/user-attachments/assets/a3d6022f-01b4-446e-a8a1-cbd0cd8708dc)


Screenshots:
- Logical view of the network topology.
- Physical view showing device arrangement.
- Simulation showing successful packet delivery.

---

## Conclusion
This lab demonstrated the configuration and functionality of different networking devices using Cisco Packet Tracer. Key takeaways include:
1. Understanding the difference between switches and hubs.
2. Observing the flow of data in logical and physical views.
3. Using Packet Tracer tools like simulation and labeling to analyze networks.
