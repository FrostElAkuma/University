#include "header.h"

void Worker::set(string n, int jobs)
{

    p  = new Work[jobs];
    assert(p != NULL);

    name = n;
    numberOfJobs = jobs;



    cout<<"Enter the job type, hours, and fee for "<< jobs << " jobs: ";
    for(int i = 0; i < numberOfJobs; i++)
    {
        cin>>p[i].type>>p[i].hours>>p[i].fee;
    }
    //cin>>this;

    findCost();
}


void Worker::findCost()
{
    float c = 0;
    for(int i = 0; i < numberOfJobs; i++)
    {
        c += p[i].hours * p[i].fee;
    }
    cost = c;
}

void Worker::print() const
{
    cout << name <<" did " << numberOfJobs << " jobs at cost " << cost << endl << endl;
    //cout<<this;
}

Worker& Worker::operator++()
{
	++numberOfJobs;
	//cout<<"i am here";
	Worker temp("temp", numberOfJobs);

	int tempNum = numberOfJobs - 1;

	for(int i=0; i < tempNum; i++){
        temp.p[i] = p[i];

	}

    delete [] p;
	p = new Work[numberOfJobs];
	assert(p != NULL);

	for(int i=0; i < tempNum; i++){
        p[i] = temp.p[i];

	}

	cout<<"Enter one more job type, hours, and fee: ";
    cin>>p[tempNum].type>>p[tempNum].hours>>p[tempNum].fee;

    findCost();

	return *this;
}

const Worker& Worker::operator=(const Worker& otherObject)
{
	name = otherObject.name;
	numberOfJobs = otherObject.numberOfJobs;

    delete [] p;
	p = new Work[numberOfJobs];
	assert(p != NULL);

	for(int i=0; i < numberOfJobs; i++){
        p[i] = otherObject.p[i];
	}

    return *this;

}

ostream& operator<<(ostream& osObject, const Worker& cObject)
{
	osObject << cObject.name <<" did " << cObject.numberOfJobs << " jobs at cost " << cObject.cost << endl << endl;

	return osObject;
}

istream& operator>>(istream& isObject, Worker& cObject)
{
	//isObject >> cObject.name >> cObject.numberOfJobs;
	for(int i = 0; i < cObject.numberOfJobs; i++)
    {
        isObject>>cObject.p[i].type>>cObject.p[i].hours>>cObject.p[i].fee;
    }

	return isObject;
}


Worker::Worker(string n, int jobs)
{

    p  = new Work[jobs];
    assert(p != NULL);

    name = n;
    numberOfJobs = jobs;

    for(int i = 0; i < numberOfJobs; i++)
    {
        p[i].type = "default";
        p[i].hours = 5;
        p[i].fee = 40;
    }

    findCost();
}

Worker::~Worker( )
{
	delete [] p;
    p = NULL;

}

Worker::Worker(const Worker &otherObject)
{

	name = otherObject.name;
	numberOfJobs = otherObject.numberOfJobs;

    delete [] p;
	p = new Work[numberOfJobs];
	assert(p != NULL);

	for(int i=0; i < numberOfJobs; i++){
        p[i] = otherObject.p[i];

	}

}

