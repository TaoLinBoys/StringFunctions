strTester: string.c
	gcc string.c -o stringtest

clean:
	rm *~

run: stringtest
	./stringtest
