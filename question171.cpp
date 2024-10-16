int T;
    cin >> T;

    while (T--) {
        int N, pos1 = -1, posN = -1, x;
        cin >> N;

        for (int i = 0; i < N; i++) {
            cin >> x;
            if (x == 1) pos1 = i;
            if (x == N) posN = i;
        }

        if (pos1 == 0 && posN == N - 1) {
            cout << 0 << endl;
        } else if (pos1 == N - 1 && posN == 0) {
            cout << 3 << endl;
        } else if (pos1 == 0 || posN == N - 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;