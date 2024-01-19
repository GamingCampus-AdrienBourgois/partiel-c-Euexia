#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    if (_from == _to) {
 
        return _value;
    }

    switch (_from)
    {
    case TemperatureUnits::CELSIUS:
        switch (_to)
        {
        case TemperatureUnits::FAHRENHEIT:
            return (_value * 9 / 5) + 32;
        case TemperatureUnits::KELVIN:
            return _value + 273.15f;
        }
        break;

    case TemperatureUnits::FAHRENHEIT:
        switch (_to)
        {
        case TemperatureUnits::CELSIUS:
            return (_value - 32) * 5 / 9;
        case TemperatureUnits::KELVIN:
            return (_value - 32) * 5 / 9 + 273.15f;
        }
        break;

    case TemperatureUnits::KELVIN:
        switch (_to)
        {
        case TemperatureUnits::CELSIUS:
            return _value - 273.15f;
        case TemperatureUnits::FAHRENHEIT:
            return (_value - 273.15f) * 9 / 5 + 32;
        }
        break;
    }

    return -1.0f;
}

#endif
