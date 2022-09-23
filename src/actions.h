#include "config.h"

String message = "";

void action(GyverPortal &p)
{
    if (portal.form("/form_message"))
    {
        Serial.println("Получен отклик из FORM1");
        Serial.print("Сообщение: ");
        Serial.println(portal.getString("inp_message"));
        Serial.println("");
        message = portal.getString("inp_message");
    }

    // if (portal.click("btn_theme"))
    // {
    //     Serial.println("Изменение темы");
    // }

    if (portal.update("message_text"))
    {
        portal.answer(message);
    }

    if (portal.click("btn_led"))
    {
        digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    }
}