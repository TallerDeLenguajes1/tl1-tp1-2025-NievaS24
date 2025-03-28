[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# .gitignore  
## ¿Qué es?  
El archivo _.gitignore_ es un archivo de texto que le indica a Git qué archivos y carpetas debe ignorar en el control de versiones.  
Su función principal es evitar que archivos innecesarios, temporales o confidenciales sean rastreados y subidos a un repositorio.  
## ¿Por qué es conveniente incluirlo?  
Incluir un _.gitignore_:  
- Mantiene el repositorio limpio   
    - Evita que archivos generados por compilación o ejecución sean agregados al repositorio.  
- Protege información sensible  
    - Impide que archivos de configuración con credenciales sean expuestos.  
- Mejora el rendimiento del repositorio  
    - Al ignorar archivos innecesarios, Git opera más rápidamente y el repositorio ocupa menos espacio.  
## ¿Cuándo se debe hacer?  
El archivo _.gitignore_ debe crearse **antes de hacer el primer commit**, así se evita que Git agregue archivos no deseados desde el inicio.   
## ¿Cómo configuraría el archivo .gitignore?  
Para configurar el archivo _.gitignore_, simplemente crea un archivo llamado _.gitignore_ en la raíz del repositorio y agrega los patrones de archivos que deseas ignorar. Por ejemplo:   
#### Un archivo específico  
archivo.txt  
#### Todos los archivos de un tipo  
*.exe  
#### Carpetas  
carpeta/  

# Punteros  
Respondiendo al punto **3g**:  
Los apartados 2. y 3. tienen el mismo resultado ya que el puntero tiene almacenada la dirección de memoria de la variable.  
En cambio en el apartado 4. ya obtengo otra dirección de memoria, que en este caso es la del puntero.  