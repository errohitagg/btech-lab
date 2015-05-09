library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplexer is
    Port ( a : in std_logic;
           b : in std_logic;
           c : in std_logic;
           d : in std_logic;
           x : in std_logic;
           y : in std_logic;
           z : out std_logic);
end multiplexer;

architecture Behavioral of multiplexer is

begin

z <= ((not y) and (not x) and a) or ((not y) and x and b) or (y and (not x) and c) or (y and x and d);

end Behavioral;
