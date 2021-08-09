import { useState } from "react";
import { setTimeout } from "timers";



function App() {
  
  const [distance, setDistance] = useState();

  const url:string = 'http://localhost:8000/distance';
  const fetchApi = async ()=> {
      const response = await fetch(url);
      var data = await response.json();
      var distance = data.distance;
      setDistance(distance);
  }
  
  setTimeout(fetchApi, 100);

  
  return (
    <div>
      <h1>Distance Sensor</h1>
      <p>Distance : {distance}</p>
    </div>
  );

}

export default App;
