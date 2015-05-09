---------------------------------------------------------------------------------------------------
--
-- Title       : comparator
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : comparator.vhd
-- Generated   : Sat Apr 10 21:55:33 2010
-- From        : interface description file
-- By          : Itf2Vhdl ver. 1.20
--
---------------------------------------------------------------------------------------------------
--
-- Description : 
--
---------------------------------------------------------------------------------------------------

--{{ Section below this comment is automatically maintained
--   and may be overwritten
--{entity {comparator} architecture {comparator}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity comparator is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 less : out STD_LOGIC;
		 greater : out STD_LOGIC;
		 equal : out STD_LOGIC
	     );
end comparator;

--}} End of automatically maintained section

architecture comparator of comparator is
begin

	-- enter your statements here --	
	
	process(a,b)
	begin
		if(a<b)
			then less<='1';
			equal<='0';
			greater<='0'; 
		elsif(a=b)
			then less<='0';
			equal<='1';
			greater<='0';
		else
			less<='0';
			equal<='0';
			greater<='1';
		end if;
	end process;
	

end comparator;
