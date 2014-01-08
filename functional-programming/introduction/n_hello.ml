let n = read_int ();;
let rec nhello x = match x with
| 0 -> ()
| _ -> print_endline "Hello World"; nhello (x -1);;
nhello n