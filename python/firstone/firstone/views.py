from django.shortcuts import render
from django.http import HttpResponse


def index(request):
    # name = 'kshitiz'
    #name = user.name
    context = {
        'name': 'Kshitiz',
        'age': 21,
        'domain': 'developer'
    }
    # return render(request, 'index.html', {'name': name})
    return render(request, 'index.html')


def counter(request):
    text = request.POST['text']
    amount = len(text.split())
    return render(request, 'counter.html', {'amount': amount})
