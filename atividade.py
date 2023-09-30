import os
def main():
	try:
		os.system("touch ricardo.txt")
		os.system("echo \'Só alegria hahaha\' >> ricardo.txt ")
		print("***********************************\n* Programa executado com sucesso! *")
		print("***********************************")
	except:
		print("Houve unm erro durante a execução do programa!")
main()
