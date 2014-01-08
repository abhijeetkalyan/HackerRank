let n = read_int ();; 

let rec fib n acc next = match n with
| 0 -> print_int acc ;acc
| _ -> fib (n-1) next (acc+next);;

fib (n-1) 0 1
