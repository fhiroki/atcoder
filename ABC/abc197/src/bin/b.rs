use proconio::{fastout, input, marker::Chars};

#[fastout]
fn main() {
    input! {
        h: usize,
        w: usize,
        mut x: usize,
        mut y: usize,
        s: [Chars; h]
    }
    x -= 1;
    y -= 1;
    let mut ans = 1;
    for dx in (0..x).rev() {
        if s[dx][y] == '#' {
            break;
        }
        ans += 1;
    }
    for dx in x + 1..h {
        if s[dx][y] == '#' {
            break;
        }
        ans += 1;
    }
    for dy in (0..y).rev() {
        if s[x][dy] == '#' {
            break;
        }
        ans += 1;
    }
    for dy in y + 1..w {
        if s[x][dy] == '#' {
            break;
        }
        ans += 1;
    }
    println!("{}", ans);
}
