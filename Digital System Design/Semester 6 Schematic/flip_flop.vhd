library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity flip_flop is
    Port ( d : in std_logic;
           clk : in std_logic;
           clr : in std_logic;
           pr : in std_logic;
           y : out std_logic);
end flip_flop;

architecture Behavioral of flip_flop is

begin
	
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

end Behavioral;
