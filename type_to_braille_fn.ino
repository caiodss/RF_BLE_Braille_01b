
void tempo() {
  delay(readSp);
  for (int i = 0; i <= 5; i++) {
    digitalWrite(digPin[i], LOW);
  }
}

void digit(int letra) {

  if (letra == 32) {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], LOW);
    }
    tempo();
  }

  if (letra == 'a') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], a[i]);
    }
    tempo();
  }

  if (letra == 'b') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], b[i]);
    }
    tempo();
  }

  if (letra == 'c') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], c[i]);
    }
    tempo();
  }

  if (letra == 'd') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], d[i]);
    }
    tempo();
  }

  ////////////////////////////////////////////

  if (letra == 'e') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], e[i]);
    }
    tempo();
  }

  if (letra == 'f') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], f[i]);
    }
    tempo();
  }


  if (letra == 'g') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], g[i]);
    }
    tempo();
  }

  if (letra == 'h') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], h[i]);
    }
    tempo();
  }

  // for loop uses 'j'
  if (letra == 'i') {
    for (int j = 0; j <= 5; j++) {
      digitalWrite(digPin[j], i[j]);
    }
    tempo();
  }

  if (letra == 'j') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], j[i]);
    }
    tempo();
  }

  if (letra == 'k') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], k[i]);
    }

    tempo();
  }

  if (letra == 'l') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], l[i]);
    }
    tempo();
  }

  if (letra == 'm') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], m[i]);
    }

    tempo();
  }

  if (letra == 'n') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n[i]);
    }

    tempo();
  }

  if (letra == 'o') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], o[i]);
    }

    tempo();
  }

  if (letra == 'p') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], p[i]);
    }

    tempo();
  }

  if (letra == 'q') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], q[i]);
    }

    tempo();
  }

  if (letra == 'r') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], r[i]);
    }

    tempo();
  }

  if (letra == 's') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], s[i]);
    }

    tempo();
  }

  if (letra == 't') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], t[i]);
    }

    tempo();
  }

  if (letra == 'u') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], u[i]);
    }

    tempo();
  }

  if (letra == 'v') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], v[i]);
    }

    tempo();
  }

  if (letra == 'w') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], w[i]);
    }

    tempo();
  }

  if (letra == 'x') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], x[i]);
    }

    tempo();
  }

  if (letra == 'y') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], y[i]);
    }

    tempo();
  }

  if (letra == 'z') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], z[i]);
    }

    tempo();
  }



  //Digits

  if (letra == '1') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n1[i]);
    }

    tempo();
  }
  if (letra == '2') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n2[i]);
    }

    tempo();
  }
  if (letra == '3') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n3[i]);
    }

    tempo();
  }
  if (letra == '4') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n4[i]);
    }

    tempo();
  }
  if (letra == '5') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n5[i]);
    }

    tempo();
  }
  if (letra == '6') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n6[i]);
    }

    tempo();
  }

  if (letra == '7') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n7[i]);
    }

    tempo();
  }

  if (letra == '8') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n8[i]);
    }

    tempo();
  }

  if (letra == '9') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n9[i]);
    }
    tempo();
  }

  if (letra == '0') {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(digPin[i], n0[i]);
    }
    tempo();
  }
}
