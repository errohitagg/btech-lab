library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity demultiplexer is
    Port ( x : in std_logic;
           y : in std_logic;
           z : in std_logic;
           a : out std_logic;
           b : out std_logic;
           c : out std_logic;
           d : out std_logic);
end demultiplexer;

architecture Behavioral of demultiplexer is

begin

a <= ((not y) and (not x) and z);
	b <= ((not y) and x and z);
	c <= (y and (not x) and z);
	d <= (y and x and z);

end Behavioral;
