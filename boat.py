from openai import OpenAI

# add your API key here
client = OpenAI(api_key="YOUR_API_KEY")

while True:
    user = input("You: ")

    if user.lower() == "exit":
        break

    response = client.chat.completions.create(
        model="gpt-4.1-mini",   # fast model
        messages=[
            {"role": "system", "content": "You are a helpful AI assistant."},
            {"role": "user", "content": user}
        ]
    )

    print("AI:", response.choices[0].message.content)