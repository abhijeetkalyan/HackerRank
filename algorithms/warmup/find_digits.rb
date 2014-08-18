def find_digits(val)
	v = val.to_i
	arr = val.split(//)
	count = 0
	arr.each do |i|
		inti = i.to_i
		if (inti != 0)
		if (v.modulo(inti) == 0)
			count += 1
		end	
	end
	end	
	puts count
end

n = gets.to_i

n.times do
	a = gets
	find_digits(a)
end	