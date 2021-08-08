#pragma once

namespace piranha {
    class http_url_extractor {
        public:
            int extract_url_path(char* request_header); // this will extract the url path from the request header
    };
}