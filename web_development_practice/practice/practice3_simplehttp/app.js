// for making just simple program copy all code from documentation just like that of emmet in html we use 
// it is not bad to use that as i have understood all that 

const http = require('http');
const fs = require('fs');

const hostname = '127.0.0.1';
const port = 80;

const home = fs.readFileSync('./index.html')

const server = http.createServer((req, res) => {
//   res.statusCode = 200;
//   res.setHeader('Content-Type', 'text/html');
//   res.end(home);
res.setHeader('Content-Type', 'text/html');
res.statusCode = 200;

if(req.url==='/'){
    res.end(home)
}
if(req.url=='/stuff'){
    res.end("here i am going to end this")
}
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});