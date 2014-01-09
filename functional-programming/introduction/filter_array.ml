let a = read_int();;
try
 while true do
  try
   let line = int_of_string (input_line stdin) in
   if (line < a) then Printf.printf "%d\n" (line) 
  with Failure("int_of_string") -> Printf.printf "%s\n" (input_line stdin)
 done;
 None
with
 End_of_file -> None
;;
