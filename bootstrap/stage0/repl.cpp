#include "repl.h"
namespace Jakt {
namespace repl {
DeprecatedString serialize_unary_operation(types::CheckedUnaryOperator const op,DeprecatedString const expr) {
{
return (({
    auto&& _jakt_value = ([&]() -> JaktInternal::ExplicitValueOrControlFlow<DeprecatedString, DeprecatedString>{
auto&& __jakt_match_variant = op;
switch(__jakt_match_variant.index()) {
case 0: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("++"sv) + expr));
};/*case end*/
case 1: {
return JaktInternal::ExplicitValue((expr + Jakt::DeprecatedString("++"sv)));
};/*case end*/
case 2: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("--"sv) + expr));
};/*case end*/
case 3: {
return JaktInternal::ExplicitValue((expr + Jakt::DeprecatedString("--"sv)));
};/*case end*/
case 4: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("-"sv) + expr));
};/*case end*/
case 5: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("*"sv) + expr));
};/*case end*/
case 6: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("&raw "sv) + expr));
};/*case end*/
case 7: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("&"sv) + expr));
};/*case end*/
case 8: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("&mut "sv) + expr));
};/*case end*/
case 9: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("not "sv) + expr));
};/*case end*/
case 10: {
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("~"sv) + expr));
};/*case end*/
default: {
return JaktInternal::ExplicitValue(((Jakt::DeprecatedString("(<Unimplemented unary operator> "sv) + expr) + Jakt::DeprecatedString(")"sv)));
};/*case end*/
}/*switch end*/
}()
);
    if (_jakt_value.is_return())
        return _jakt_value.release_return();
    _jakt_value.release_value();
}));
}
}

ErrorOr<DeprecatedString> serialize_ast_node(NonnullRefPtr<typename types::CheckedExpression> const node) {
{
return (({
    auto&& _jakt_value = ([&]() -> JaktInternal::ExplicitValueOrControlFlow<DeprecatedString, ErrorOr<DeprecatedString>>{
auto&& __jakt_match_variant = *node;
switch(__jakt_match_variant.index()) {
case 0: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::Boolean>();bool const& val = __jakt_match_value.val;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}"sv),val))));
};/*case end*/
case 1: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::NumericConstant>();types::CheckedNumericConstant const& val = __jakt_match_value.val;
return JaktInternal::ExplicitValue(({
    auto&& _jakt_value = ([&]() -> JaktInternal::ExplicitValueOrControlFlow<DeprecatedString, ErrorOr<DeprecatedString>>{
auto&& __jakt_match_variant = val;
switch(__jakt_match_variant.index()) {
case 0: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::I8>();
i8 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}i8"sv),value))));
};/*case end*/
case 1: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::I16>();
i16 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}i16"sv),value))));
};/*case end*/
case 2: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::I32>();
i32 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}i32"sv),value))));
};/*case end*/
case 3: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::I64>();
i64 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}i64"sv),value))));
};/*case end*/
case 4: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::U8>();
u8 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}u8"sv),value))));
};/*case end*/
case 5: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::U16>();
u16 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}u16"sv),value))));
};/*case end*/
case 6: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::U32>();
u32 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}u32"sv),value))));
};/*case end*/
case 7: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::U64>();
u64 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}u64"sv),value))));
};/*case end*/
case 9: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::F32>();
f32 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}f32"sv),value))));
};/*case end*/
case 10: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::F64>();
f64 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}f64"sv),value))));
};/*case end*/
case 8: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename types::CheckedNumericConstant::USize>();
u64 const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}uz"sv),value))));
};/*case end*/
default: VERIFY_NOT_REACHED();}/*switch end*/
}()
);
    if (_jakt_value.is_return())
        return _jakt_value.release_return();
    _jakt_value.release_value();
}));
};/*case end*/
case 2: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::QuotedString>();types::CheckedStringLiteral const& val = __jakt_match_value.val;
return JaktInternal::ExplicitValue(({
    auto&& _jakt_value = ([&]() -> JaktInternal::ExplicitValueOrControlFlow<DeprecatedString,ErrorOr<DeprecatedString>>{
auto __jakt_enum_value = (((((val).type_id)).equals(types::builtin( types::BuiltinType { typename types::BuiltinType::JaktString() } ))));
if (__jakt_enum_value == true) {
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("\"{}\""sv),((val).to_string())))));
}
else {
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("(overloaded) \"{}\""sv),((val).to_string())))));
}
}());
    if (_jakt_value.is_return())
        return _jakt_value.release_return();
    _jakt_value.release_value();
}));
};/*case end*/
case 3: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::ByteConstant>();DeprecatedString const& val = __jakt_match_value.val;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("b'{}'"sv),val))));
};/*case end*/
case 4: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::CharacterConstant>();DeprecatedString const& val = __jakt_match_value.val;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("'{}'"sv),val))));
};/*case end*/
case 5: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::CCharacterConstant>();DeprecatedString const& val = __jakt_match_value.val;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("c'{}'"sv),val))));
};/*case end*/
case 6: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::UnaryOp>();NonnullRefPtr<typename types::CheckedExpression> const& expr = __jakt_match_value.expr;
types::CheckedUnaryOperator const& op = __jakt_match_value.op;
return JaktInternal::ExplicitValue(repl::serialize_unary_operation(op,TRY((repl::serialize_ast_node(expr)))));
};/*case end*/
case 8: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::JaktTuple>();JaktInternal::DynamicArray<NonnullRefPtr<typename types::CheckedExpression>> const& vals = __jakt_match_value.vals;
return JaktInternal::ExplicitValue(({ Optional<DeprecatedString> __jakt_var_860; {
DeprecatedStringBuilder builder = TRY((DeprecatedStringBuilder::create()));
TRY((((builder).append_string(Jakt::DeprecatedString("("sv)))));
{
JaktInternal::Range<size_t> _magic = (JaktInternal::Range<size_t>{static_cast<size_t>(static_cast<size_t>(0ULL)),static_cast<size_t>(((vals).size()))});
for (;;){
JaktInternal::Optional<size_t> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
size_t i = (_magic_value.value());
{
if ((i != static_cast<size_t>(0ULL))){
TRY((((builder).append_string(Jakt::DeprecatedString(", "sv)))));
}
TRY((((builder).append_string(TRY((repl::serialize_ast_node(((vals)[i]))))))));
}

}
}

TRY((((builder).append_string(Jakt::DeprecatedString(")"sv)))));
__jakt_var_860 = TRY((((builder).to_string()))); goto __jakt_label_776;

}
__jakt_label_776:; __jakt_var_860.release_value(); }));
};/*case end*/
case 9: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::Range>();JaktInternal::Optional<NonnullRefPtr<typename types::CheckedExpression>> const& from = __jakt_match_value.from;
JaktInternal::Optional<NonnullRefPtr<typename types::CheckedExpression>> const& to = __jakt_match_value.to;
return JaktInternal::ExplicitValue(({ Optional<DeprecatedString> __jakt_var_861; {
DeprecatedString from_output = Jakt::DeprecatedString(""sv);
if (((from).has_value())){
(from_output = TRY((repl::serialize_ast_node((from.value())))));
}
DeprecatedString to_output = Jakt::DeprecatedString(""sv);
if (((to).has_value())){
(to_output = TRY((repl::serialize_ast_node((to.value())))));
}
__jakt_var_861 = TRY((__jakt_format(Jakt::DeprecatedString("{}..{}"sv),from_output,to_output))); goto __jakt_label_777;

}
__jakt_label_777:; __jakt_var_861.release_value(); }));
};/*case end*/
case 10: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::JaktArray>();JaktInternal::DynamicArray<NonnullRefPtr<typename types::CheckedExpression>> const& vals = __jakt_match_value.vals;
return JaktInternal::ExplicitValue(({ Optional<DeprecatedString> __jakt_var_862; {
DeprecatedStringBuilder builder = TRY((DeprecatedStringBuilder::create()));
TRY((((builder).append_string(Jakt::DeprecatedString("["sv)))));
{
JaktInternal::Range<size_t> _magic = (JaktInternal::Range<size_t>{static_cast<size_t>(static_cast<size_t>(0ULL)),static_cast<size_t>(((vals).size()))});
for (;;){
JaktInternal::Optional<size_t> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
size_t i = (_magic_value.value());
{
if ((i != static_cast<size_t>(0ULL))){
TRY((((builder).append_string(Jakt::DeprecatedString(", "sv)))));
}
TRY((((builder).append_string(TRY((repl::serialize_ast_node(((vals)[i]))))))));
}

}
}

TRY((((builder).append_string(Jakt::DeprecatedString("]"sv)))));
__jakt_var_862 = TRY((((builder).to_string()))); goto __jakt_label_778;

}
__jakt_label_778:; __jakt_var_862.release_value(); }));
};/*case end*/
case 11: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::JaktSet>();JaktInternal::DynamicArray<NonnullRefPtr<typename types::CheckedExpression>> const& vals = __jakt_match_value.vals;
return JaktInternal::ExplicitValue(({ Optional<DeprecatedString> __jakt_var_863; {
DeprecatedStringBuilder builder = TRY((DeprecatedStringBuilder::create()));
TRY((((builder).append_string(Jakt::DeprecatedString("{"sv)))));
{
JaktInternal::Range<size_t> _magic = (JaktInternal::Range<size_t>{static_cast<size_t>(static_cast<size_t>(0ULL)),static_cast<size_t>(((vals).size()))});
for (;;){
JaktInternal::Optional<size_t> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
size_t i = (_magic_value.value());
{
if ((i != static_cast<size_t>(0ULL))){
TRY((((builder).append_string(Jakt::DeprecatedString(", "sv)))));
}
TRY((((builder).append_string(TRY((repl::serialize_ast_node(((vals)[i]))))))));
}

}
}

TRY((((builder).append_string(Jakt::DeprecatedString("}"sv)))));
__jakt_var_863 = TRY((((builder).to_string()))); goto __jakt_label_779;

}
__jakt_label_779:; __jakt_var_863.release_value(); }));
};/*case end*/
case 12: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::JaktDictionary>();JaktInternal::DynamicArray<JaktInternal::Tuple<NonnullRefPtr<typename types::CheckedExpression>,NonnullRefPtr<typename types::CheckedExpression>>> const& vals = __jakt_match_value.vals;
return JaktInternal::ExplicitValue(({ Optional<DeprecatedString> __jakt_var_864; {
DeprecatedStringBuilder builder = TRY((DeprecatedStringBuilder::create()));
TRY((((builder).append_string(Jakt::DeprecatedString("["sv)))));
{
JaktInternal::Range<size_t> _magic = (JaktInternal::Range<size_t>{static_cast<size_t>(static_cast<size_t>(0ULL)),static_cast<size_t>(((vals).size()))});
for (;;){
JaktInternal::Optional<size_t> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
size_t i = (_magic_value.value());
{
if ((i != static_cast<size_t>(0ULL))){
TRY((((builder).append_string(Jakt::DeprecatedString(", "sv)))));
}
JaktInternal::Tuple<NonnullRefPtr<typename types::CheckedExpression>,NonnullRefPtr<typename types::CheckedExpression>> const val = ((vals)[i]);
TRY((((builder).append_string(TRY((repl::serialize_ast_node(((val).template get<0>()))))))));
TRY((((builder).append_string(Jakt::DeprecatedString(": "sv)))));
TRY((((builder).append_string(TRY((repl::serialize_ast_node(((val).template get<1>()))))))));
}

}
}

TRY((((builder).append_string(Jakt::DeprecatedString("]"sv)))));
__jakt_var_864 = TRY((((builder).to_string()))); goto __jakt_label_780;

}
__jakt_label_780:; __jakt_var_864.release_value(); }));
};/*case end*/
case 13: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::IndexedExpression>();NonnullRefPtr<typename types::CheckedExpression> const& expr = __jakt_match_value.expr;
NonnullRefPtr<typename types::CheckedExpression> const& index = __jakt_match_value.index;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}[{}]"sv),TRY((repl::serialize_ast_node(expr))),TRY((repl::serialize_ast_node(index)))))));
};/*case end*/
case 14: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::IndexedDictionary>();NonnullRefPtr<typename types::CheckedExpression> const& expr = __jakt_match_value.expr;
NonnullRefPtr<typename types::CheckedExpression> const& index = __jakt_match_value.index;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}[{}]"sv),TRY((repl::serialize_ast_node(expr))),TRY((repl::serialize_ast_node(index)))))));
};/*case end*/
case 15: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::IndexedTuple>();NonnullRefPtr<typename types::CheckedExpression> const& expr = __jakt_match_value.expr;
size_t const& index = __jakt_match_value.index;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}.{}"sv),TRY((repl::serialize_ast_node(expr))),index))));
};/*case end*/
case 16: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::IndexedStruct>();NonnullRefPtr<typename types::CheckedExpression> const& expr = __jakt_match_value.expr;
JaktInternal::Optional<types::VarId> const& index = __jakt_match_value.index;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}.{}"sv),TRY((repl::serialize_ast_node(expr))),index))));
};/*case end*/
case 23: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::NamespacedVar>();JaktInternal::DynamicArray<types::CheckedNamespace> const& namespaces = __jakt_match_value.namespaces;
NonnullRefPtr<types::CheckedVariable> const& var = __jakt_match_value.var;
return JaktInternal::ExplicitValue(({ Optional<DeprecatedString> __jakt_var_865; {
DeprecatedStringBuilder builder = TRY((DeprecatedStringBuilder::create()));
{
JaktInternal::ArrayIterator<types::CheckedNamespace> _magic = ((namespaces).iterator());
for (;;){
JaktInternal::Optional<types::CheckedNamespace> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
types::CheckedNamespace namespace_ = (_magic_value.value());
{
TRY((((builder).append_string(((namespace_).name)))));
TRY((((builder).append_string(Jakt::DeprecatedString("::"sv)))));
}

}
}

TRY((((builder).append_string(((var)->name)))));
__jakt_var_865 = TRY((((builder).to_string()))); goto __jakt_label_781;

}
__jakt_label_781:; __jakt_var_865.release_value(); }));
};/*case end*/
case 24: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::Var>();NonnullRefPtr<types::CheckedVariable> const& var = __jakt_match_value.var;
return JaktInternal::ExplicitValue(((var)->name));
};/*case end*/
case 25: {
return JaktInternal::ExplicitValue(Jakt::DeprecatedString("None"sv));
};/*case end*/
case 26: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::OptionalSome>();NonnullRefPtr<typename types::CheckedExpression> const& expr = __jakt_match_value.expr;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("Some({})"sv),TRY((repl::serialize_ast_node(expr)))))));
};/*case end*/
case 27: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::ForcedUnwrap>();NonnullRefPtr<typename types::CheckedExpression> const& expr = __jakt_match_value.expr;
return JaktInternal::ExplicitValue(TRY((__jakt_format(Jakt::DeprecatedString("{}!"sv),TRY((repl::serialize_ast_node(expr)))))));
};/*case end*/
case 21: {
auto&& __jakt_match_value = __jakt_match_variant.template get<types::CheckedExpression::Call>();types::CheckedCall const& call = __jakt_match_value.call;
return JaktInternal::ExplicitValue(({ Optional<DeprecatedString> __jakt_var_866; {
DeprecatedStringBuilder builder = TRY((DeprecatedStringBuilder::create()));
{
JaktInternal::ArrayIterator<types::ResolvedNamespace> _magic = ((((call).namespace_)).iterator());
for (;;){
JaktInternal::Optional<types::ResolvedNamespace> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
types::ResolvedNamespace namespace_ = (_magic_value.value());
{
TRY((((builder).append_string(((namespace_).name)))));
TRY((((builder).append_string(Jakt::DeprecatedString("::"sv)))));
}

}
}

TRY((((builder).append_string(((call).name)))));
TRY((((builder).append_string(Jakt::DeprecatedString("("sv)))));
{
JaktInternal::Range<size_t> _magic = (JaktInternal::Range<size_t>{static_cast<size_t>(static_cast<size_t>(0ULL)),static_cast<size_t>(((((call).args)).size()))});
for (;;){
JaktInternal::Optional<size_t> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
size_t i = (_magic_value.value());
{
if ((i != static_cast<size_t>(0ULL))){
TRY((((builder).append_string(Jakt::DeprecatedString(", "sv)))));
}
JaktInternal::Tuple<DeprecatedString,NonnullRefPtr<typename types::CheckedExpression>> const arg = ((((call).args))[i]);
if ((!(((((arg).template get<0>())).is_empty())))){
TRY((((builder).append_string(((arg).template get<0>())))));
TRY((((builder).append_string(Jakt::DeprecatedString(": "sv)))));
}
TRY((((builder).append_string(TRY((repl::serialize_ast_node(((arg).template get<1>()))))))));
}

}
}

TRY((((builder).append_string(Jakt::DeprecatedString(")"sv)))));
__jakt_var_866 = TRY((((builder).to_string()))); goto __jakt_label_782;

}
__jakt_label_782:; __jakt_var_866.release_value(); }));
};/*case end*/
case 34: {
return JaktInternal::ExplicitValue(Jakt::DeprecatedString("<Garbage>"sv));
};/*case end*/
default: {
return JaktInternal::ExplicitValue(Jakt::DeprecatedString("<Unimplemented>"sv));
};/*case end*/
}/*switch end*/
}()
);
    if (_jakt_value.is_return())
        return _jakt_value.release_return();
    _jakt_value.release_value();
}));
}
}

ErrorOr<DeprecatedString> repl::REPL::debug_description() const { auto builder = MUST(DeprecatedStringBuilder::create());TRY(builder.append("REPL("sv));{
JaktInternal::PrettyPrint::ScopedLevelIncrease increase_indent {};
TRY(JaktInternal::PrettyPrint::output_indentation(builder));TRY(builder.appendff("compiler: {}, ", *compiler));
TRY(JaktInternal::PrettyPrint::output_indentation(builder));TRY(builder.appendff("typechecker: {}, ", typechecker));
TRY(JaktInternal::PrettyPrint::output_indentation(builder));TRY(builder.appendff("root_scope_id: {}, ", root_scope_id));
TRY(JaktInternal::PrettyPrint::output_indentation(builder));TRY(builder.appendff("root_interpreter_scope: {}, ", *root_interpreter_scope));
TRY(JaktInternal::PrettyPrint::output_indentation(builder));TRY(builder.appendff("file_id: {}", file_id));
}
TRY(builder.append(")"sv));return builder.to_string(); }
ErrorOr<repl::REPL> repl::REPL::create(jakt__path::Path const runtime_path,JaktInternal::Optional<DeprecatedString> const target_triple,JaktInternal::Dictionary<DeprecatedString,DeprecatedString> const user_configuration) {
{
NonnullRefPtr<compiler::Compiler> compiler = TRY((compiler::Compiler::__jakt_create((TRY((DynamicArray<jakt__path::Path>::create_with({})))),(TRY((Dictionary<DeprecatedString, utility::FileId>::create_with_entries({})))),(TRY((DynamicArray<error::JaktError>::create_with({})))),JaktInternal::OptionalNone(),(TRY((DynamicArray<u8>::create_with({})))),false,false,false,false,runtime_path,(TRY((DynamicArray<DeprecatedString>::create_with({})))),false,false,false,false,target_triple,user_configuration)));
TRY((((compiler)->load_prelude())));
utility::FileId const file_id = TRY((((compiler)->get_file_id_or_register(TRY((jakt__path::Path::from_string(Jakt::DeprecatedString("<repl>"sv))))))));
types::ModuleId const placeholder_module_id = types::ModuleId(static_cast<size_t>(0ULL));
DeprecatedString const root_module_name = Jakt::DeprecatedString("repl"sv);
typechecker::Typechecker typechecker = typechecker::Typechecker(compiler,TRY((types::CheckedProgram::__jakt_create(compiler,(TRY((DynamicArray<NonnullRefPtr<types::Module>>::create_with({})))),(TRY((Dictionary<DeprecatedString, types::LoadedModule>::create_with_entries({}))))))),placeholder_module_id,types::TypeId::none(),JaktInternal::OptionalNone(),false,static_cast<size_t>(0ULL),false,((compiler)->dump_type_hints),((compiler)->dump_try_hints),static_cast<u64>(0ULL),types::GenericInferences((TRY((Dictionary<DeprecatedString, DeprecatedString>::create_with_entries({}))))),JaktInternal::OptionalNone(),root_module_name,false,false);
(((compiler)->current_file) = file_id);
TRY((((typechecker).include_prelude())));
types::ModuleId const root_module_id = TRY((((typechecker).create_module(root_module_name,true,JaktInternal::OptionalNone()))));
(((typechecker).current_module_id) = root_module_id);
TRY((((((typechecker).program))->set_loaded_module(root_module_name,types::LoadedModule(root_module_id,file_id)))));
types::ScopeId const PRELUDE_SCOPE_ID = ((typechecker).prelude_scope_id());
types::ScopeId const root_scope_id = TRY((((typechecker).create_scope(PRELUDE_SCOPE_ID,true,Jakt::DeprecatedString("root"sv),true))));
NonnullRefPtr<interpreter::InterpreterScope> const root_interpreter_scope = TRY((interpreter::InterpreterScope::create((TRY((Dictionary<DeprecatedString, types::Value>::create_with_entries({})))),JaktInternal::OptionalNone(),(TRY((Dictionary<DeprecatedString, types::TypeId>::create_with_entries({})))))));
return (repl::REPL(compiler,typechecker,root_scope_id,root_interpreter_scope,file_id));
}
}

ErrorOr<void> repl::REPL::run() {
{
Function<ErrorOr<void>(repl_backend__default::Editor&)> const syntax_highlight_handler = [this](repl_backend__default::Editor& editor) -> ErrorOr<void> {
{
DeprecatedString const line = TRY((((((editor))).get_active_buffer())));
size_t pos = static_cast<size_t>(0ULL);
JaktInternal::DynamicArray<u8> bytes_ = (TRY((DynamicArray<u8>::create_with({}))));
TRY((((bytes_).ensure_capacity(((line).length())))));
while ((pos < ((line).length()))){
TRY((((bytes_).push(((line).byte_at(pos))))));
(++(pos));
}
(((((*this).compiler))->current_file) = ((*this).file_id));
(((((*this).compiler))->current_file_contents) = bytes_);
ScopeGuard __jakt_var_867([&] {
{
JaktInternal::DynamicArray<error::JaktError> const arr = (MUST((DynamicArray<error::JaktError>::create_with({}))));
(((((*this).compiler))->errors) = arr);
}

});
{
JaktInternal::ArrayIterator<lexer::Token> _magic = ((({ Optional<JaktInternal::DynamicArray<lexer::Token>> __jakt_var_868;
auto __jakt_var_869 = [&]() -> ErrorOr<JaktInternal::DynamicArray<lexer::Token>> { return TRY((lexer::Lexer::lex(((*this).compiler)))); }();
if (__jakt_var_869.is_error()) {{
return {};
}
} else {__jakt_var_868 = __jakt_var_869.release_value();
}
__jakt_var_868.release_value(); })).iterator());
for (;;){
JaktInternal::Optional<lexer::Token> const _magic_value = ((_magic).next());
if ((!(((_magic_value).has_value())))){
break;
}
lexer::Token token = (_magic_value.value());
{
({
    auto&& _jakt_value = ([&]() -> JaktInternal::ExplicitValueOrControlFlow<void, ErrorOr<void>>{
auto&& __jakt_match_variant = token;
switch(__jakt_match_variant.index()) {
case 0: {
auto&& __jakt_match_value = __jakt_match_variant.template get<lexer::Token::SingleQuotedString>();utility::Span const& span = __jakt_match_value.span;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Green() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 1: {
auto&& __jakt_match_value = __jakt_match_variant.template get<lexer::Token::QuotedString>();utility::Span const& span = __jakt_match_value.span;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Green() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 2: {
auto&& __jakt_match_value = __jakt_match_variant.template get<lexer::Token::Number>();utility::Span const& span = __jakt_match_value.span;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Blue() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 59: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::And>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 60: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Anon>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 61: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::As>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 62: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Boxed>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 63: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Break>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 64: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Catch>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 65: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Class>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 66: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Continue>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 67: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Cpp>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 68: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Defer>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 69: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Destructor>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 70: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Else>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 71: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Enum>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 72: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Extern>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 73: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::False>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 74: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::For>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 75: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Fn>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 76: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Comptime>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 77: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::If>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 78: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Import>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 79: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::In>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 80: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Is>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 81: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Let>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 82: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Loop>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 83: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Match>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 84: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Mut>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 85: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Namespace>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 86: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Not>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 87: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Or>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 88: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Override>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 89: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Private>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 90: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Public>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 91: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Raw>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 92: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Reflect>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 93: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Return>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 94: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Restricted>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 95: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Sizeof>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 96: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Struct>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 97: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::This>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 53: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Dot>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 98: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Throw>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 99: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Throws>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 100: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::True>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 101: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Try>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 102: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Unsafe>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 103: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Virtual>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 104: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Weak>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 105: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::While>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 106: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Yield>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 107: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Guard>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 108: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Implements>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 109: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Requires>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 110: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::Trait>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Yellow() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 54: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename lexer::Token::DotDot>();
utility::Span const& span = __jakt_match_value.value;
return (TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::XTerm( repl_backend__common::XTermColor { typename repl_backend__common::XTermColor::Cyan() } ) } ,JaktInternal::OptionalNone())))))), JaktInternal::ExplicitValue<void>();
};/*case end*/
case 55: {
auto&& __jakt_match_value = __jakt_match_variant.template get<lexer::Token::Eol>();utility::Span const& span = __jakt_match_value.span;
JaktInternal::Optional<DeprecatedString> const& comment = __jakt_match_value.comment;
{
if (((comment).has_value())){
TRY((((((editor))).highlight(span,repl_backend__common::Style( repl_backend__common::Color { typename repl_backend__common::Color::RGB(static_cast<u8>(128),static_cast<u8>(128),static_cast<u8>(128)) } ,JaktInternal::OptionalNone())))));
}
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
default: {
{
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
}/*switch end*/
}()
);
    if (_jakt_value.is_return())
        return _jakt_value.release_return();
    if (_jakt_value.is_loop_break())
        break;
    if (_jakt_value.is_loop_continue())
        continue;
    _jakt_value.release_value();
});
}

}
}

}
return {};
}
;
repl_backend__default::Editor editor = TRY((repl_backend__default::Editor::create(Jakt::DeprecatedString("> "sv),((syntax_highlight_handler)))));
ScopeGuard __jakt_var_870([&] {
((editor).destroy());
});
for (;;){
if ((!(((((((*this).compiler))->errors)).is_empty())))){
TRY((((((*this).compiler))->print_errors())));
JaktInternal::DynamicArray<error::JaktError> const arr = (TRY((DynamicArray<error::JaktError>::create_with({}))));
(((((*this).compiler))->errors) = arr);
}
repl_backend__common::LineResult const line_result = ({ Optional<repl_backend__common::LineResult> __jakt_var_871;
auto __jakt_var_872 = [&]() -> ErrorOr<repl_backend__common::LineResult> { return TRY((((editor).get_line()))); }();
if (__jakt_var_872.is_error()) {auto error = __jakt_var_872.release_error();
{
return {};
}
} else {__jakt_var_871 = __jakt_var_872.release_value();
}
__jakt_var_871.release_value(); });
if (((line_result).index() == 0 /* Line */)){
DeprecatedString const line = ((line_result).get<repl_backend__common::LineResult::Line>()).value;
if ((line == Jakt::DeprecatedString("\n"sv))){
continue;
}
if ((line == Jakt::DeprecatedString(".exit\n"sv))){
break;
}
size_t pos = static_cast<size_t>(0ULL);
JaktInternal::DynamicArray<u8> bytes_ = (TRY((DynamicArray<u8>::create_with({}))));
TRY((((bytes_).ensure_capacity(((line).length())))));
while ((pos < ((line).length()))){
TRY((((bytes_).push(((line).byte_at(pos))))));
(++(pos));
}
(((((*this).compiler))->current_file) = ((*this).file_id));
(((((*this).compiler))->current_file_contents) = bytes_);
JaktInternal::DynamicArray<lexer::Token> const tokens = ({ Optional<JaktInternal::DynamicArray<lexer::Token>> __jakt_var_873;
auto __jakt_var_874 = [&]() -> ErrorOr<JaktInternal::DynamicArray<lexer::Token>> { return TRY((lexer::Lexer::lex(((*this).compiler)))); }();
if (__jakt_var_874.is_error()) {{
continue;
}
} else {__jakt_var_873 = __jakt_var_874.release_value();
}
__jakt_var_873.release_value(); });
if (((tokens).is_empty())){
continue;
}
parser::Parser parser = parser::Parser(static_cast<size_t>(0ULL),tokens,((*this).compiler),true);
lexer::Token const first_token = (((tokens).first()).value());
if (((((((((((first_token).index() == 75 /* Fn */) || ((first_token).index() == 76 /* Comptime */)) || ((first_token).index() == 96 /* Struct */)) || ((first_token).index() == 65 /* Class */)) || ((first_token).index() == 71 /* Enum */)) || ((first_token).index() == 62 /* Boxed */)) || ((first_token).index() == 85 /* Namespace */)) || ((first_token).index() == 78 /* Import */)) || ((first_token).index() == 110 /* Trait */))){
parser::ParsedNamespace const parsed_namespace = ({ Optional<parser::ParsedNamespace> __jakt_var_875;
auto __jakt_var_876 = [&]() -> ErrorOr<parser::ParsedNamespace> { return TRY((((parser).parse_namespace()))); }();
if (__jakt_var_876.is_error()) {{
TRY((((*this).handle_possible_error())));
continue;
}
} else {__jakt_var_875 = __jakt_var_876.release_value();
}
__jakt_var_875.release_value(); });
if (TRY((((*this).handle_possible_error())))){
continue;
}
auto __jakt_var_878 = [&]() -> ErrorOr<void> { return TRY((((((*this).typechecker)).typecheck_module(parsed_namespace,((*this).root_scope_id))))), ErrorOr<void>{}; }();
if (__jakt_var_878.is_error()) {{
TRY((((*this).handle_possible_error())));
continue;
}
}
;
TRY((((*this).handle_possible_error())));
continue;
}
NonnullRefPtr<typename parser::ParsedStatement> const parsed_statement = ({ Optional<NonnullRefPtr<typename parser::ParsedStatement>> __jakt_var_879;
auto __jakt_var_880 = [&]() -> ErrorOr<NonnullRefPtr<typename parser::ParsedStatement>> { return TRY((((parser).parse_statement(true)))); }();
if (__jakt_var_880.is_error()) {{
TRY((((*this).handle_possible_error())));
continue;
}
} else {__jakt_var_879 = __jakt_var_880.release_value();
}
__jakt_var_879.release_value(); });
if (TRY((((*this).handle_possible_error())))){
continue;
}
NonnullRefPtr<typename types::CheckedStatement> const checked_statement = ({ Optional<NonnullRefPtr<typename types::CheckedStatement>> __jakt_var_881;
auto __jakt_var_882 = [&]() -> ErrorOr<NonnullRefPtr<typename types::CheckedStatement>> { return TRY((((((*this).typechecker)).typecheck_statement(parsed_statement,((*this).root_scope_id), types::SafetyMode { typename types::SafetyMode::Safe() } ,JaktInternal::OptionalNone())))); }();
if (__jakt_var_882.is_error()) {{
TRY((((*this).handle_possible_error())));
continue;
}
} else {__jakt_var_881 = __jakt_var_882.release_value();
}
__jakt_var_881.release_value(); });
if (TRY((((*this).handle_possible_error())))){
continue;
}
NonnullRefPtr<interpreter::Interpreter> interpreter = TRY((((((*this).typechecker)).interpreter())));
interpreter::StatementResult const result = ({ Optional<interpreter::StatementResult> __jakt_var_883;
auto __jakt_var_884 = [&]() -> ErrorOr<interpreter::StatementResult> { return TRY((((interpreter)->execute_statement(checked_statement,((*this).root_interpreter_scope),utility::Span(((*this).file_id),static_cast<size_t>(0ULL),((line).length())))))); }();
if (__jakt_var_884.is_error()) {{
TRY((((*this).handle_possible_error())));
continue;
}
} else {__jakt_var_883 = __jakt_var_884.release_value();
}
__jakt_var_883.release_value(); });
if (TRY((((*this).handle_possible_error())))){
continue;
}
({
    auto&& _jakt_value = ([&]() -> JaktInternal::ExplicitValueOrControlFlow<void, ErrorOr<void>>{
auto&& __jakt_match_variant = result;
switch(__jakt_match_variant.index()) {
case 0: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename interpreter::StatementResult::Return>();
types::Value const& value = __jakt_match_value.value;
{
if (((((value).impl))->index() == 0 /* Void */)){
return JaktInternal::LoopContinue{};
}
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
case 5: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename interpreter::StatementResult::JustValue>();
types::Value const& value = __jakt_match_value.value;
{
if (((((value).impl))->index() == 0 /* Void */)){
return JaktInternal::LoopContinue{};
}
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
case 1: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename interpreter::StatementResult::Throw>();
types::Value const& value = __jakt_match_value.value;
{
if (((((value).impl))->index() == 0 /* Void */)){
return JaktInternal::LoopContinue{};
}
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
case 4: {
{
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
case 3: {
{
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
case 2: {
{
}
return JaktInternal::ExplicitValue<void>();
};/*case end*/
default: VERIFY_NOT_REACHED();}/*switch end*/
}()
);
    if (_jakt_value.is_return())
        return _jakt_value.release_return();
    if (_jakt_value.is_loop_break())
        break;
    if (_jakt_value.is_loop_continue())
        continue;
    _jakt_value.release_value();
});
DeprecatedString const output = ({
    auto&& _jakt_value = ([&]() -> JaktInternal::ExplicitValueOrControlFlow<DeprecatedString, ErrorOr<void>>{
auto&& __jakt_match_variant = result;
switch(__jakt_match_variant.index()) {
case 0: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename interpreter::StatementResult::Return>();
types::Value const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((repl::serialize_ast_node(TRY((interpreter::value_to_checked_expression(value,interpreter)))))));
};/*case end*/
case 5: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename interpreter::StatementResult::JustValue>();
types::Value const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue(TRY((repl::serialize_ast_node(TRY((interpreter::value_to_checked_expression(value,interpreter)))))));
};/*case end*/
case 1: {
auto&& __jakt_match_value = __jakt_match_variant.template get<typename interpreter::StatementResult::Throw>();
types::Value const& value = __jakt_match_value.value;
return JaktInternal::ExplicitValue((Jakt::DeprecatedString("throw "sv) + TRY((repl::serialize_ast_node(TRY((interpreter::value_to_checked_expression(value,interpreter))))))));
};/*case end*/
case 4: {
{
return JaktInternal::LoopContinue{};
}
};/*case end*/
case 3: {
{
return JaktInternal::LoopContinue{};
}
};/*case end*/
case 2: {
{
return JaktInternal::LoopContinue{};
}
};/*case end*/
default: VERIFY_NOT_REACHED();}/*switch end*/
}()
);
    if (_jakt_value.is_return())
        return _jakt_value.release_return();
    if (_jakt_value.is_loop_break())
        break;
    if (_jakt_value.is_loop_continue())
        continue;
    _jakt_value.release_value();
});
outln(Jakt::DeprecatedString("= {}"sv),output);
}
else {
break;
}

}
}
return {};
}

repl::REPL::REPL(NonnullRefPtr<compiler::Compiler> a_compiler, typechecker::Typechecker a_typechecker, types::ScopeId a_root_scope_id, NonnullRefPtr<interpreter::InterpreterScope> a_root_interpreter_scope, utility::FileId a_file_id) :compiler(move(a_compiler)), typechecker(move(a_typechecker)), root_scope_id(move(a_root_scope_id)), root_interpreter_scope(move(a_root_interpreter_scope)), file_id(move(a_file_id)){}

ErrorOr<bool> repl::REPL::handle_possible_error() {
{
TRY((((((*this).compiler))->print_errors())));
bool const has_error = (((((((*this).compiler))->errors)).size()) > static_cast<size_t>(0ULL));
JaktInternal::DynamicArray<error::JaktError> const arr = (TRY((DynamicArray<error::JaktError>::create_with({}))));
(((((*this).compiler))->errors) = arr);
return (has_error);
}
}

}
} // namespace Jakt
