void build()
{
    BUILD_BEGIN();
    GP.THEME(GP_LIGHT);

    // GP.TITLE("Телепортация информации");
    GP.TITLE("ESP Infoporter");
    GP.HR();

    if (portal.uri() == "/send")
    {
        GP.FORM_BEGIN("/form_message");
        GP.BREAK();
        GP.LABEL("Отправка сообщений");
        GP.BREAK();
        GP.BREAK();
        GP.TEXT("inp_message", "Сообщение", "");
        GP.BREAK();
        GP.BREAK();
        GP.SUBMIT("Отправить");
        GP.BREAK();
        GP.FORM_END();
        GP.HR();

        GP.BREAK();
        GP.BUTTON_LINK("/", "Главная страница");
    }

    else if (portal.uri() == "/recieve")
    {
        GP.AJAX_UPDATE("message_text");
        GP.BREAK();
        GP.LABEL("Прием сообщений");
        GP.BREAK();
        GP.BREAK();
        GP.AREA("message_text", 5);
        GP.BREAK();
        GP.HR();

        GP.BREAK();
        GP.BUTTON_LINK("/", "Главная страница");
    }

    else if (portal.uri() == "/settings")
    {
        GP.LABEL("Настройки");
        // GP.FORM_BEGIN("/form_theme");
        // GP.BREAK();
        // GP.BREAK();
        // GP.BREAK();
        // GP.BREAK();
        // GP.BREAK();
        // GP.LABEL("Изменение темы интерфейса");
        // GP.BREAK();
        // GP.LABEL("Темная");
        // GP.SWITCH("btn_theme", !digitalRead(LED_PIN));
        // GP.LABEL("Светлая");
        // GP.BREAK();
        // GP.HR();

        GP.BREAK();
        GP.BREAK();
        GP.BREAK();
        GP.BREAK();
        GP.LABEL("Управление свтодидом");
        GP.BREAK();
        GP.LABEL("Выкл");
        GP.SWITCH("btn_led", !digitalRead(LED_PIN));
        GP.LABEL("Вкл");
        GP.BREAK();
        GP.HR();

        GP.BREAK();
        GP.BUTTON_LINK("/", "Главная страница");
    }

    else
    {
        GP.BREAK();
        GP.LABEL("Выберите режим:");
        GP.BREAK();
        GP.BUTTON_LINK("/send", "Отправка");
        GP.BUTTON_LINK("/recieve", "Получение");
        GP.BUTTON_LINK("/settings", "Настройки");
    }

    BUILD_END();

    // Serial.println("Форма создана");
}