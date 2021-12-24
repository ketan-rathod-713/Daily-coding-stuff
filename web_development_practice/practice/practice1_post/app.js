const bodyParser = require('body-parser');
const { urlencoded } = require('body-parser');
const express = require('express')
const path = require('path')
const app = express();
const port = 80;

app.use(express,bodyParser.urlencoded);

app.get('/',function(req,res){
    res.sendFile(path.join(__dirname+'/index.html'));
    //__dirname : It will resolve to your project folder.
  });
app.post('/',(req,res)=>{
    // do anything
    let name = req.body.name
    console.log(name)
})

app.listen(port,()=>{
    console.log("application started ha ha")
})