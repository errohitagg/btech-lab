---------------------------------------------------------------------------------------------------
--
-- Title       : counter
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : counter.vhd
-- Generated   : Thu Apr 22 11:09:08 2010
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
--{entity {counter} architecture {counter}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;							  
use IEEE.STD_LOGIC_UNSIGNED.all;

entity counter is
	 port(
		 clr : in STD_LOGIC;
		 clk : in STD_LOGIC;
		 updown : in STD_LOGIC;
		 count : out STD_LOGIC_VECTOR(3 downto 0)
	     );
end counter;

--}} End of automatically maintained section

architecture counter of counter is							

signal temp: std_logic_vector(3 downto 0);

begin

	-- enter your statements here --	  
	
	process (clk, clr)	
	begin
		if(clr = '1') then
			temp<="0000";
		elsif (clk'event and clk='1') then
			if(updown = '1') then
				temp<=temp+1;
			else
				temp<=temp-1;
			end if;
		end if;
	end process;
	count<=temp;

end counter;
