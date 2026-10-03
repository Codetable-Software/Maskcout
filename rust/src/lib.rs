#![no_std]
pub mod memory; pub mod security; pub mod ipc;
#[no_mangle] pub extern "C" fn maskcout_rust_init() -> i32 { 0 }
