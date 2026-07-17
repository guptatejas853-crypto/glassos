add_library(glass_browser

    browser.c

    core/browser_engine.c

    network/http_client.c

    parser/html_parser.c

    renderer/render_engine.c

    tabs/tab_manager.c

    download/download_manager.c

    bookmark/bookmark_manager.c

    private/private_mode.c
)


target_include_directories(glass_browser

    PUBLIC

        ${PROJECT_SOURCE_DIR}/browser

        ${PROJECT_SOURCE_DIR}/include
)
