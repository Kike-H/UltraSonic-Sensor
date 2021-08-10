import { useState } from "react";


function App() {
  
  const [distance, setDistance] = useState();
  //const url = "ws://localhost:8000/ws"
  const url_2 = "http://localhost:8000/distance";

  //var ws = new WebSocket(url);

  const change_distance = async () => {
    var data = await fetch(url_2);
    var data_j = await data.json();
    var d_d = data_j.distance;
    setDistance(d_d);
    console.log(distance);
  }

  //ws.onmessage = (e) => {
    //change_distance(e.data);
  //}
  
  setInterval(change_distance, 1000);
  

  return (
    <div>
      <div className="card card-title my-2">
      <h1 className="my-2">Distance Sensor</h1>
      </div>
      <div className="card card-body my-5">
        <h3>Distance : {distance} cm</h3>
      </div>
    </div>
    
  );

}

export default App;
