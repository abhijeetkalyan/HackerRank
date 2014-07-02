def calculate_height
	cycles = gets.to_i
	height = 1
	count = 0
	while cycles > 0 do
		if count.even? 
			height = 2 * height
		else
			height += 1
			
		end
	cycles -=1;
	count +=1;		
	end
	puts height	
end

i = gets.to_i

while i > 0 do
	calculate_height
	i -=1;
end
