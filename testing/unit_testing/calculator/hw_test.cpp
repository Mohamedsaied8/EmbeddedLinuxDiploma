
std::string readTemperatureStub()
{
    return "25";
}

int main()
{
    auto t = readTemperatureStub();

    SendToDashboard(t);

}