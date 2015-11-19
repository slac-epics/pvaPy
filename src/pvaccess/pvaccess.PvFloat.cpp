//
// PV Float class
//
class_<PvFloat, bases<PvScalar> >("PvFloat", 
    "PvFloat represents PV float type.\n\n"
    "**PvFloat([value=0])**\n\n"
    "\t:Parameter: *value* (float) - float value\n\n"
    "\t::\n\n"
    "\t\tpv = PvFloat(1.1)\n\n", 
    init<>())

    .def(init<float>())

    .def("get", 
        &PvFloat::get, 
        "Retrieves float PV value.\n\n"
        ":Returns: float value\n\n"
        "::\n\n"
        "    value = pv.get()\n\n")

    .def("set", 
        &PvFloat::set, 
        args("value"), 
        "Sets float PV value.\n\n"
        ":Parameter: *value* (float) - float value\n\n"
        "::\n\n"
        "    pv.set(1.1)\n\n")
;