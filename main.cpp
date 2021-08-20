#include <stdio.h>
#include "bot_core/src/QueryBuilder.h"

int main(void)
{
    QueryBuilder query_builder = QueryBuilder();
    query_builder.MakeTestQuery();
    return 0;
}
