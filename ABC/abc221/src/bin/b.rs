use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        s: Chars,
        t: Chars,
    }
    for i in 0..s.len() - 1 {
        let mut _s = s.clone();
        _s.swap(i, i + 1);
        if _s == t {
            println!("Yes");
            return;
        }
    }
    if s == t {
        println!("Yes");
    } else {
        println!("No");
    }
}
