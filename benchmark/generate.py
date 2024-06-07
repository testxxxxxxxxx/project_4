#number generator for project_4

class File:

    def __init__(self, path: str, name: str, mode: str) -> None:

        self.__path: str = path
        self.__name: str = name
        self.__mode: str = mode
        self.__dir: str = path + name

    def save(self, nodes: int, saturation: int = 0) -> None:

        with open(self.__dir, self.__mode) as f:

            f.write(str(nodes) + '\n')

            if saturation > 0:
                f.write(str(saturation) + '\n')

class NumberGenerator():

    def __init__(self, numberOfNodes: int) -> None:

        self.__numberOfNodes = numberOfNodes

    def generate(self, saturation: int) -> int:

        path: str = './benchmark_data/'        

        for i in range(self.__numberOfNodes + 1):

            file: File = File(path, str(i), 'w')

            file.save(pow(2, i), saturation)

def main() -> None:

    numberGenerator: NumberGenerator = NumberGenerator(19)

    numberGenerator.generate(30)

if __name__ == '__main__':
    main()