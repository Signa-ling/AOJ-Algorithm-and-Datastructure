import os


def main():
    problem_name = input("問題名を入力してください(ALDSなど): ")
    problem_num_1 = input("大問番号を入力してください(1など): ")
    problem_num_2 = input("小問番号を入力してください(1など): ")
    problem_alphabet = input("問題のアルファベットを入力してください(Aなど): ")
    problem = problem_name + "_" + problem_num_1 + "_" + problem_num_2 + "_" + problem_alphabet
    question = ""
    while(True):
        question = input("問題名は {} で良いですか(y/n): ".format(problem))
        if question == "n" or question == "y":
            break
        print("入力に間違いがあります.")

    if question == "y":
        folder_name = "./" + problem_name
        if not os.path.exists(folder_name):
            print("フォルダが見つからない為、フォルダを作成します")
            os.mkdir(folder_name)
        file_name = problem + ".cpp"
        cre_file = os.path.join(folder_name, file_name).replace("\\", "/")
        print(cre_file)
        if not os.path.exists(cre_file):
            with open(cre_file, mode="w") as f:
                print(type(f))

        else:
            print("{} は既に存在しています".format(cre_file))

    else:
        print("もう一度最初からやり直してね")


if __name__ == "__main__":
    main()
