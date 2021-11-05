package jk11ll.holamundo.spring;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;
//import for lombok.extern.slf4j.Slf4j
@RestController
//@Slf4j
public class ControladorInicio {
    @GetMapping("/hola")
    public String inicio(){
        //log.info("ejecutado controlador");
        return "Hola mundo con spring 2";
    }
}
