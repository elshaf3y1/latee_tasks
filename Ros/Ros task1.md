## ROS Service
A ros service is one of the communication mechanisms that are used in transferring data, it is made of a Server node and a Client node. The Client node requests data from the Server node and waits until the request is handled by the Server node and send back a response.
This aids in synchronous communication as it ensures that the client gets a response for every request it sends, making it suitable for tasks that require a guaranteed response.
 The ros service blocking nature may cause delays as service calls are blocking by default, which means the client will wait for the server to respond, potentially leading to delays if the server is slow or unresponsive.



## ROS node diagram
![alt text](<Untitled Diagram.jpg>)