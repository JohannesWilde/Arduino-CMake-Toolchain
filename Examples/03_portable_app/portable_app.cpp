// Including app_entry.h provides platform independent application
// entry points (app_setup/app_loop)
#include <app_entry.h>

// Including app_stdio.h provides platform independent standard
// input/output (app_printf/app_scanf)
#include <app_stdio.h>

#include <string.h>

void app_setup()
{
	// Initialize standard input/output
	init_app_stdio();
}

void app_loop()
{
	// Read some text and then print it
	char buf[128];
    memset(buf, 0, sizeof(buf) * sizeof(buf[0]));
    app_printf("Enter text: ");
	app_scanf("%s", buf); // Warning: Overflow possibility
    app_printf("\r\nEntered => %s\r\n", buf);
}

