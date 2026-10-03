pub const READ:u32=1;pub const WRITE:u32=2;pub const EXEC:u32=4;pub fn allows(caps:u32,need:u32)->bool{caps&need==need}
