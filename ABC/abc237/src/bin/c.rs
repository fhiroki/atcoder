use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        mut s: Chars
    }
    let l = s.iter().take_while(|&c| *c == 'a').count();
    let r = s.iter().rev().take_while(|&c| *c == 'a').count();
    if r > l {
        s.reverse();
        for _ in 0..(r - l) {
            s.push('a');
        }
    }
    let mut t = s.clone();
    t.reverse();

    if s == t {
        println!("Yes");
    } else {
        println!("No");
    }
}
