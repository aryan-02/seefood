#include <iostream>
#include <string>
int main(int argc, char* argv[])
{
	if(argc <= 1)
	{
		std::cout << "Please specify an image file." << std::endl;
		return 1;
	}
	else {
		if (argc > 2) 
		{
			std::cout << "Warning: Too many args. Only the first one shall be considered." << std::endl;
		}
		std::string s = (std::string)argv[1];
		system(("python -m scripts.label_image --graph=tf_files/retrained_graph.pb  --image=" + s).c_str());
	}
	return 0;
}