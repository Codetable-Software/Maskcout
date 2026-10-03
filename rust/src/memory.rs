pub fn checked_add(a: usize,b:usize)->Option<usize>{a.checked_add(b)}
pub fn is_aligned(v:usize,a:usize)->bool{a!=0&&(a&(a-1))==0&&v%a==0}
