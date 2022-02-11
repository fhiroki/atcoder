use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        mut s: Chars,
        mut a: usize,
        mut b: usize
    }
    a -= 1;
    b -= 1;
    let sa = s[a];
    s[a] = s[b];
    s[b] = sa;
    println!("{}", s.iter().collect::<String>());
}
