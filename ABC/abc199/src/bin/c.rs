use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        n: i64,
        mut s: Chars,
        q: usize,
    }
    let mut flip = false;
    for _ in 0..q {
        input! {
            t: u8,
            mut a: i64,
            mut b: i64
        }
        if t == 1 {
            a -= 1;
            b -= 1;
            if flip {
                a -= n;
                b -= n;
                if a < 0 {
                    a += 2 * n;
                }
                if b < 0 {
                    b += 2 * n;
                }
            }
            let sa = s[a as usize];
            let sb = s[b as usize];
            s[a as usize] = sb;
            s[b as usize] = sa;
        } else {
            flip = !flip;
        }
    }
    let mut ans = String::new();
    if flip {
        ans += &s[n as usize..].iter().collect::<String>();
        ans += &s[..n as usize].iter().collect::<String>();
    } else {
        ans = s.iter().collect::<String>();
    }
    println!("{}", ans);
}
