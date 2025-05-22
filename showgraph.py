from graphviz import Source

try:
    with open("matrix_graph.dot") as f:
        dot_source = f.read()

    graph = Source(dot_source)
    graph.view()  # Opens in default PDF viewer or image viewer
except FileNotFoundError:
    print("Error: matrix_graph.dot file not found.")
except Exception as e:
    print(f"An error occurred: {e}")
