---------------------------------------------------------------------------------------------------
--
-- Title       : flipflop
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : flipflop.vhd
-- Generated   : Sat Apr 10 22:00:18 2010
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
--{entity {flipflop} architecture {flipflop}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity flipflop is
	 port(
		 d : in BIT;
		 clk : in BIT;
		 clr : in BIT;
		 pr : in BIT;
		 y : out BIT
	     );
end flipflop;

--}} End of automatically maintained section

architecture flipflop of flipflop is
begin

	-- enter your statements here --		  
	
	process(d, clk, pr)
	begin
		if(pr='0' and clr='1')
			then y<='1';
		elsif(pr='1' and clr='0')
			then y<='0';
		elsif(pr='1' and clr='1' and clk'event and clk='0')
			then y<=d;
		end if;
	end process;
	

end flipflop;
