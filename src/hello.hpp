#pragma once

#include <string>
#include <string_view>

#include <userver/components/component_list.hpp>

namespace person_service {

enum class UserType { kFirstTime, kKnown };
std::string SayHelloTo(std::string_view name, UserType type);

void AppendHello(userver::components::ComponentList& component_list);

}  // namespace person_service
